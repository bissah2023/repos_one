#include <stdio.h>
#include "core.h"
#define _CRT_SECURE_NO_WARNINGS_
/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 1
Full Name  :Franck Willy Bissah Tchinda
Student ID#:161878236
Email      :fwbissah-tchinda@myseneca.ca
Section    :ZBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/


// Main: Entry-point to the application
int main(void)
{
    printf("Assignment 1 Milestone 1: Tester\n");
    printf("================================\n\n");

    // -----------------------------------------
    // Unit Tests:

    // Integer testers
    test01_inputInt();
    test02_inputIntPositive();
    test03_inputIntRange();
    test04_inputIntRange();

    // Char tester
    test05_inputCharOption();

    // C string testers
    test06_inputCString();
    test07_inputCString();
    test08_inputCString();

    // phone
    test09_displayPhone();

    printf("Assignment #1 Milestone #1 testing completed!\n");

    return 0;
}