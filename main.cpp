/*
MIT License

Copyright (c) 2020 Carsten1987

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */

#include <iostream>

using namespace std;

int main(void)
{
    int value = 42;
    int* pointer_to_value;
    int* pointer2_to_value;

    pointer_to_value = &value;
    pointer2_to_value = pointer_to_value;

    /* only the value*/
    cout << "value: " << value << endl;
    /* the address of value*/
    cout << "&value: 0x" << &value << endl;
    /* value of pointer_to_value (address of value)*/
    cout << "pointer_to_value: 0x" << pointer_to_value << endl;
    /* the address of pointer_to_value*/
    cout << "&pointer_to_value: 0x" << &pointer_to_value << endl;
    /* only the value */
    cout << "*pointer_to_value: " << *pointer_to_value << endl;
    cout << "pointer2_to_value: 0x" << pointer2_to_value << endl;
    cout << "&pointer2_to_value: 0x" << &pointer2_to_value << endl;
    cout << "*pointer2_to_value: " << *pointer2_to_value << endl;

    value -= 2;
    cout << "value: " << value << endl;
    *pointer_to_value += 2;
    cout << "value: " << value << endl;
    *pointer2_to_value += 8;
    cout << "value: " << value << endl;

    return 0;
}