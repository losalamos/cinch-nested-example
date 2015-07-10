/*~-------------------------------------------------------------------------~~*
 * Copyright (c) 2014 Los Alamos National Security, LLC
 * All rights reserved.
 *~-------------------------------------------------------------------------~~*/

#include <iostream>
#include <example.h>
#include <print.h>

int main(int argc, char ** argv) {

    mylib::example::print();
    ourlib::example<double>::print();

    return 0;
} // main

/*~------------------------------------------------------------------------~--*
 * vim: set tabstop=4 shiftwidth=4 expandtab :
 *~------------------------------------------------------------------------~--*/