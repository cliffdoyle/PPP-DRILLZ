// #include "PPP/Window.h"
// #include "PPP/Graph.h"

// using namespace Graph_lib;
// int main(int /*argc*/, char* /*argv*/[])
// {
//     Application app;
//     Window window({20, 20}, 600, 400, "Main window");
//     Text text({150, 20}, "Well hello there!");
//     window.attach(text);
//     app.gui_main();
// }
#include "PPP/Simple_window.h"

#include "PPP/Graph.h"

double dsin(double d) { return sin(d); };

int main()
{
    using namespace Graph_lib;
    // Function sine{dsin, 0, 100, Point{20, 150}, 1000, 50, 50};
    Application app;
    // Point tl{900, 500};
    // Simple_window win{tl, 600, 400, "Canva"};
    // // Polygon poly;
    // // poly.add(Point{300, 200});
    // // poly.add(Point{350, 100});
    // // poly.add(Point{400, 200});
    // // poly.set_color(Color::red);
    // Polygon poly;
    // poly.add(Point{300, 200});
    // poly.add(Point{350, 100});
    // poly.add(Point{400, 200});
    // Axis xa{Axis::x, Point{20, 300}, 280, 10, "x axis"};

    // Rectangle r{Point{200, 200}, 100, 50};
    // //  xa.set_color(Color::yellow);

    // Closed_polyline poly_rect;
    // poly_rect.add(Point{100, 50});
    // poly_rect.add(Point{200, 50});
    // poly_rect.add(Point{200, 100});
    // poly_rect.add(Point{100, 100});
    // // win.set_label("Polyline");

    // poly_rect.add(Point{50, 75});
    // win.set_label("Polyline 2");
    // win.attach(poly_rect);

    // Axis ya{Axis::y, Point{20, 300}, 280, 10, "y axis"};
    // ya.set_color(Color::cyan);
    // sine.set_color(Color::red);
    // // choose a color for the y axis
    // ya.label.set_color(Color::dark_red);
    // // choose a color for the text
    // win.attach(ya);
    // win.set_label("Y axis");

    // win.attach(sine);
    // win.set_label("Sine");

    // win.attach(r);
    // win.set_label("Rectangle");

    // win.attach(xa);
    // poly.set_color(Color::green);
    // win.attach(poly);

    // r.set_fill_color(Color::yellow);
    // // color the inside of the rectangle
    // poly.set_style(Line_style(Line_style::dash, 4));
    // poly_rect.set_style(Line_style(Line_style::dash, 2));
    // poly_rect.set_fill_color(Color::green);
    // Text t{Point{150, 150}, "Hello, graphical world!. This is Captain Cliff speaking."};
    // win.attach(t);
    // t.set_font(Font::times_bold);
    // t.set_font_size(30);
    // Image copter{Point{100, 50}, "aviel.jpg"};
    // win.attach(copter);

    // copter.move(100, 250);
    // win.set_label("Move");
    // // win.set_label("Polyline2");
    // // win.set_label("X axis");
    // win.wait_for_button();

    // Draw two lines
    constexpr Point x{100, 100};
    Simple_window win{x, 600, 300, "two lines"};
    // Line horizontal{x, Point{200, 100}};
    // Line vertical{Point{150, 50}, Point{150, 150}};

    // win.attach(horizontal);
    // win.attach(vertical);
    int x_size = win.x_max();
    int y_size = win.y_max();
    int x_grid = 80;
    int y_grid = 40;

    Lines grid;

    for (int x = x_grid; x < x_size; x += x_grid)
    {

        grid.add(Point{x, 0}, Point{x, y_size});
    }

    for (int y = y_grid; y < y_size; y += y_grid)
    {
        grid.add(Point{0, y}, Point{x_size, y});
    }
    Color myine{Color::invisible};
    grid.set_color(myine);
    win.attach(grid);
    win.set_label("Grid");

    win.wait_for_button();
}