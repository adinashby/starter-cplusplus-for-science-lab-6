/* DO NOT MODIFY THIS FILE */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "labFile.hpp"

TEST_CASE("test1", "Rectangle operations are computed") {
    Rectangle rect;
    rect.setDimensions(4, 5);

    REQUIRE(rect.getWidth() == 4);
    REQUIRE(rect.getHeight() == 5);
    REQUIRE(rect.area() == 20);
}

TEST_CASE("test2", "Point modification and access") {
    Point p;
    p.setPoint(10, 20);

    REQUIRE(p.getX() == 10);
    REQUIRE(p.getY() == 20);
}

TEST_CASE("test3", "Array of pointers to Circle objects") {
    Circle* circles[3];
    circles[0] = new Circle(1.0);
    circles[1] = new Circle(2.0);
    circles[2] = new Circle(3.0);

    REQUIRE(circles[0]->area() == Approx(3.14159));
    REQUIRE(circles[1]->area() == Approx(12.56636));
    REQUIRE(circles[2]->area() == Approx(28.274333));

    // Clean up
    delete circles[0];
    delete circles[1];
    delete circles[2];
}

TEST_CASE("test4", "Employee pointers work correctly") {
    Employee* employees[2];
    employees[0] = new Employee{1, "Alice"};
    employees[1] = new Employee{2, "Bob"};

    REQUIRE(employees[0]->id == 1);
    REQUIRE(strcmp(employees[0]->name, "Alice") == 0);
    REQUIRE(employees[1]->id == 2);
    REQUIRE(strcmp(employees[1]->name, "Bob") == 0);

    // Clean up
    delete employees[0];
    delete employees[1];
}

