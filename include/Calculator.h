#pragma once

class Calculator {
public:
    Calculator ();
    void clear ();
    double getResult ();
    double add (double a, double b);
    double add (double a);
    double subtract (double a, double b);
    double subtract (double a);
    double multiply (double a, double b);
    double multiply (double a);
    double divide (double a, double b);
    double divide (double a);

private:
    double mResult;
};