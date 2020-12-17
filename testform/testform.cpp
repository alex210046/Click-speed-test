#include "form.h"
#include <chrono>
using namespace form;
using namespace std::chrono;

int tc = 1;
high_resolution_clock::time_point t1, t2;

void testform::check(double x) {
    if (x > 5)
        testform::button1->Enabled = false;
}

double testform::cps(int x) {
    t2 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
    testform::check(time_span.count());
    return float(tc / time_span.count());
}

void testform::click() {
    tc++;
    testform::label3->Text = cps(tc).ToString();
    testform::label4->Text = tc.ToString();
}

void testform::start() {
    t1 = high_resolution_clock::now();
}
