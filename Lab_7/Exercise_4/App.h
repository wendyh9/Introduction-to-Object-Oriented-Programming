#ifndef APP_H
#define APP_H

#include "Rect.h"

class AppWindow {
    protected:
        Rect rect;
    
    public:
        AppWindow() {
            Rect();
        }

        AppWindow( float x, float y, float w, float h ) {
            Rect( x, y, w, h );
        }

        AppWindow( const Rect& r ) {
            rect.x = r.x;
            rect.y = r.y;
            rect.w = r.w;
            rect.h = r.h;
        }

        const Rect& get_rect() {    
            return rect;
        }

        virtual void resize( int w, int h ) {
            rect.w = w;
            rect.h = h;
        }
};

class CircleWin : public AppWindow {
    protected:
        float radius;
    public:
        CircleWin() {
            AppWindow();
            radius = 0;
        }
        CircleWin( float x, float y, float w, float h ) {
            rect.x = x;
            rect.y = y;
            rect.w = w;
            rect.h = h;
            // note: radius is considered to be the maximum dimension among w and h of rectangle
            radius = (w > h) ? w : h;   
        }
        CircleWin( const Rect& r ) {
            rect.x = r.x;
            rect.y = r.y;
            rect.w = r.w;
            rect.h = r.h;
            radius = (rect.w > rect.h) ? rect.w : rect.h;
        }
        void resize( int w, int h ) {
            AppWindow::resize(w, h);
            radius = (rect.w > rect.h) ? rect.w : rect.h;
            std::cout << "radius = " << radius << std::endl;
        }
};

class RectWin : public AppWindow {
    protected:
        float area;
    
    public:
        RectWin() {
            AppWindow();
        }
        RectWin( float x, float y, float w, float h ) {
            rect.x = x;
            rect.y = y;
            rect.w = w;
            rect.h = h;
            area = w * h;
        }
        RectWin( const Rect& r ) {
            rect.x = r.x;
            rect.y = r.y;
            rect.w = r.w;
            rect.h = r.h;
            area = rect.w * rect.h;    
        }
        void resize( int w, int h ) {
            AppWindow::resize(w, h);
            area = w * h;
            std::cout << "area = " << area << std::endl;
        }
};

#endif