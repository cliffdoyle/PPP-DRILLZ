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

int main()
{
    using namespace Graph_lib;
    Application app;
    Point tl{900, 500};
    Simple_window win{tl, 600, 400, "Canva"};
    // Polygon poly;
    // poly.add(Point{300, 200});
    // poly.add(Point{350, 100});
    // poly.add(Point{400, 200});
    // poly.set_color(Color::red);
    Axis xa{Axis::x, Point{20, 300}, 280, 10, "x axis"};
    //  xa.set_color(Color::yellow);

    Axis ya{Axis::y, Point{20, 300}, 280, 10, "y axis"};
    ya.set_color(Color::cyan);
    // choose a color for the y axis
    ya.label.set_color(Color::dark_red);
    // choose a color for the text
    win.attach(ya);
    win.set_label("Y axis");

    win.attach(xa);
    // win.set_label("X axis");
    win.wait_for_button();
}