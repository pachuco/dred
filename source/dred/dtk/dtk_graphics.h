// Copyright (C) 2016 David Reid. See included LICENSE file.

typedef enum
{
    dtk_graphics_backend_gdi,
    dtk_graphics_backend_cairo,
    //dtk_graphics_backend_x11
} dtk_graphics_backend;


typedef struct
{
    dtk_uint8 r;
    dtk_uint8 g;
    dtk_uint8 b;
    dtk_uint8 a;
} dtk_color;

DTK_INLINE dtk_color dtk_color_rgba(dtk_uint8 r, dtk_uint8 g, dtk_uint8 b, dtk_uint8 a)
{
    dtk_color color;
    color.r = r;
    color.g = g;
    color.b = b;
    color.a = a;
    return color;
}

DTK_INLINE dtk_color dtk_color_rgb(dtk_uint8 r, dtk_uint8 g, dtk_uint8 b)
{
    return dtk_color_rgba(r, g, b, 255);
}


typedef struct
{
    dtk_context* pTK;
    dtk_graphics_backend backend;
    dtk_uint32 width;
    dtk_uint32 height;
    
    union
    {
    #ifdef DTK_WIN32
        struct
        {
            /*HDC*/ dtk_handle hDC;
        } gdi;
    #endif
    #ifdef DTK_GTK
        struct
        {
            /*cairo_surface_t**/ dtk_ptr pSurface;
            /*cairo_t**/ dtk_ptr pContext;
        } cairo;
    #endif
    #ifdef DTK_X11
        struct
        {
            int unused;
        } x11;
    #endif
    };
} dtk_surface;

// Initializes a surface which draws directly to a window.
dtk_result dtk_surface_init_window(dtk_context* pTK, dtk_window* pWindow, dtk_surface* pSurface);

// Uninitializes a surface.
dtk_result dtk_surface_uninit(dtk_surface* pSurface);

// Clears the given surface within it's current clipping region.
void dtk_surface_clear(dtk_surface* pSurface, dtk_color color);

// Draws a quad onto the given surface.
void dtk_surface_draw_quad(dtk_surface* pSurface, dtk_int32 x, dtk_int32 y, dtk_uint32 width, dtk_uint32 height);
