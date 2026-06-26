// Program to create a quiz application.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int subjectChoice, choice, score = 0;

    cout << "===== Quiz Application =====" << endl;
    cout << "Choose a subject:" << endl;
    cout << "1. English\n2. Maths\n3. PPS (Programming)\n4. Physics\n5. Biology\n6. Chemistry" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> subjectChoice;

    cout << "\n===== Quiz Started =====" << endl;

    switch (subjectChoice)
    {

    case 1: // English
        cout << "\nQ1. Synonym of 'Happy'?\n1. Sad\n2. Joyful\n3. Angry\n4. Tired\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ2. Antonym of 'Fast'?\n1. Quick\n2. Slow\n3. Rapid\n4. Speedy\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ3. Which is a verb?\n1. Run\n2. Blue\n3. Tall\n4. Chair\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 1)
            score++;

        cout << "\nQ4. Plural of 'Child'?\n1. Childs\n2. Children\n3. Childes\n4. Childer\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ5. Which is a pronoun?\n1. He\n2. Book\n3. Run\n4. Happy\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 1)
            score++;

        cout << "\nQ6. Opposite of 'Hot'?\n1. Warm\n2. Cold\n3. Heat\n4. Fire\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;
        break;

    case 2: // Maths
        cout << "\nQ1. Value of 5 + 7?\n1. 10\n2. 12\n3. 13\n4. 14\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ2. Square root of 81?\n1. 7\n2. 8\n3. 9\n4. 10\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 3)
            score++;

        cout << "\nQ3. 15% of 200?\n1. 20\n2. 25\n3. 30\n4. 35\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 3)
            score++;

        cout << "\nQ4. Value of pi (approx)?\n1. 2.14\n2. 3.14\n3. 4.14\n4. 5.14\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ5. Solve: 2 * 3 + 4 = ?\n1. 10\n2. 12\n3. 14\n4. 16\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 1)
            score++;

        cout << "\nQ6. Derivative of x^2?\n1. 2x\n2. x\n3. x^3\n4. 1\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 1)
            score++;
        break;

    case 3: // PPS
        cout << "\nQ1. Which header file is required for cout?\n1. stdio.h\n2. iostream\n3. conio.h\n4. math.h\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ2. Which symbol ends a statement?\n1. ,\n2. ;\n3. :\n4. .\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ3. Which loop executes at least once?\n1. for\n2. while\n3. do-while\n4. none\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 3)
            score++;

        cout << "\nQ4. Which is NOT a data type?\n1. int\n2. float\n3. char\n4. loop\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 4)
            score++;

        cout << "\nQ5. Which operator checks equality?\n1. =\n2. ==\n3. !=\n4. <=\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ6. Which keyword is commonly used for a function with no return value?\n1. func\n2. void\n3. def\n4. main\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;
        break;

    case 4: // Physics
        cout << "\nQ1. SI unit of Force?\n1. Joule\n2. Newton\n3. Watt\n4. Pascal\n";
        cout << "Enter your choice :";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ2. Speed = ?\n1. Distance / Time\n2. Time / Distance\n3. Force / Mass\n4. Work / Time\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 1)
            score++;

        cout << "\nQ3. Acceleration due to gravity (approx)?\n1. 8\n2. 9.8\n3. 10\n4. 12\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ4. SI unit of Energy?\n1. Watt\n2. Joule\n3. Newton\n4. Pascal\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ5. Light travels fastest in?\n1. Water\n2. Glass\n3. Vacuum\n4. Air\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 3)
            score++;

        cout << "\nQ6. Who discovered gravity?\n1. Einstein\n2. Newton\n3. Galileo\n4. Tesla\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;
        break;

    case 5: // Biology
        cout << "\nQ1. Basic unit of life?\n1. Atom\n2. Cell\n3. Tissue\n4. Organ\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ2. Photosynthesis occurs in?\n1. Mitochondria\n2. Chloroplast\n3. Nucleus\n4. Ribosome\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ3. Human heart has how many chambers?\n1. 2\n2. 3\n3. 4\n4. 5\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 3)
            score++;

        cout << "\nQ4. DNA stands for?\n1. Deoxyribonucleic Acid\n2. Dynamic Nucleic Acid\n3. Double Nucleic Acid\n4. None\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 1)
            score++;

        cout << "\nQ5. Largest organ in the human body?\n1. Heart\n2. Liver\n3. Skin\n4. Brain\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 3)
            score++;

        cout << "\nQ6. Blood is pumped by the?\n1. Brain\n2. Heart\n3. Lungs\n4. Kidney\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;
        break;

    case 6: // Chemistry
        cout << "\nQ1. Atomic number of Oxygen?\n1. 6\n2. 7\n3. 8\n4. 9\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 3)
            score++;

        cout << "\nQ2. H2O is?\n1. Hydrogen Peroxide\n2. Water\n3. Hydroxide\n4. Acid\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ3. pH of a neutral solution?\n1. 5\n2. 6\n3. 7\n4. 8\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 3)
            score++;

        cout << "\nQ4. NaCl is?\n1. Sugar\n2. Salt\n3. Acid\n4. Base\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ5. Gas used in respiration?\n1. CO2\n2. O2\n3. N2\n4. H2\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;

        cout << "\nQ6. Chemical symbol of Iron?\n1. Ir\n2. Fe\n3. In\n4. I\n";
        cout << "Enter your choice :";
        cin >> choice;
        if (choice == 2)
            score++;
        break;

    default:
        cout << "Invalid subject choice!" << endl;
        return 0;
    }

    cout << "\n===== Quiz Finished =====" << endl;
    cout << "Your Score: " << score << " out of 6" << endl;

    if (score == 6)
        cout << "Excellent! Full Marks!" << endl;
    else if (score >= 4)
        cout << "Good Job! You did well." << endl;
    else if (score >= 2)
        cout << "Keep Practicing. You'll improve." << endl;
    else
        cout << "Better Luck Next Time!" << endl;

    return 0;
}