# ousb-gui specification
Graphical user interface for the Open-USB-IO platform

AUTHOR OF SPEC: PJ RADCLIFFE

PURPOSE     This file defines the GUI for Open-USB-IO lab exam,  it is not a proforma
            where you add code,  just a specification.
            Note also the marking proforma used by the tutors to evaluate your work,
            see the file GUI_marking_guide_2368.xls


BACKGROUND: Most products require GUI programs both for legitimate operational
            reasons and to help sales.  In this project you will be building a GUI
            for the Open-USB-IO board.


SPECIFIC REQUIREMENTS 

  * The program must be written using Eclipse and Qt 4 Designer using the
    lab test live-DVDs.

  * The main GUI screen must clearly state your name and student ID.

  * Marks will come from a pleasing layout on the screen and the number of
    features you can implement from the list below.

  * At the end of the lab exam you must copy the executable code from the 
    workspace (/home/user/workspace/project_name/) to /home/user/Document
    rename it "lab2" and check it works.  Next submit and check that it
    is successfully received at the tutor's station.

  * Features to consider implementing are listed below.  You are
    not expected to implement every item.

      - An "about" must describe in text what you have achieved.  This
        will help the tutor find everything you have done.
        Ideally this will be from the menu with hot key ctrl-A but
        just a text box on the main screen is OK.
        *** An achievement not listed in this box may not be marked.

      - A timer must cause the status of Open-USB-IO to be read every
        second and the display should be updated.

      - The status of the 8 switches must be clear.

      - It must be possible to see the value of the LEDs and write
        to the LEDs.  Can you do this graphically with buttons?

      - Display the status of the LDR and pot.  Ideally the display
        will be graphical.

      - Set PWM 1, 2 and 3.

      - Display the analogue values on the 6 free analogue ports.

      - Display a primitive chart recorder of the switches or
        trim pot.  Consider a text box where each second a new
        row of 1s and 0s from the switches is added at the first
        line or appended at the bottom line.

      - Features and ideas NOT in the qt demo programs will
        rate more highly than those from the qt demo programs.

  * Your code must be compiled in "release" mode.
