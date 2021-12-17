#include <iostream>
using namespace std;
int main()
{
    string x, y;

    cout << "INSTRUCTIONS!" << endl;
    cout << "A maximum of two creatures are allowed in the boat for each crossing. \nThe Human must never be outnumbered by the monsters. \nThe boat will not move if there is no creature in it." << endl;
    cout << "Your choice can only be H, HH, M, MM, HM, MH.. \n 1. H >> Humans \n 2. M >> Monsters \n 3. HH >> Human Human \n 4. MM >> Monster Monster \n 5. HM >> Human Monster \n 6. MH >> Monster Human." << endl;
startagain:
    cout << "HHHMMM --()SHIP()----------------------" << endl;
    cout << "Enter Creater you wanna move : ";
    cin >> x; //1

    //MMM CONDITION.. false condition
    if (x == "mmm" || x == "MMM")
    {
        cout << "Only two creaters are allowed in the boat," << endl;
        cout << "You enter anivalid number: " << endl;
        goto startagain;
    }
    //hhh CONDITION.. false condition
    if (x == "HHH" || x == "hhh")
    {
        cout << "Only two creaters are allowed in the boat," << endl;
        cout << "You enter anivalid number: " << endl;
        goto startagain;
    }

//starting of hm condition..
singleHmcondition:
    if (x == "hm" || x == "HM" || x == "mh" || x == "MH") //condition with HMM
    {
        cout << "HHMM ----------->>-----------()SHIP()-- HM" << endl;
        cout << "Enter Creater you wanna move back : ";

    enteragaincondition2:
        cin >> x;

        if (x == "hh" || x == "HH") //invalid Number condition
        {
            cout << "You enter anivalid number, Please Enter Again: ";
            goto enteragaincondition2;
        }

        if (x == "hm" || x == "HM" || x == "MH" || x == "mh") //repeatationn..
        {
            goto startagain;
        }

        if (x == "M" || x == "m") //False Condition..
        {
            cout << "The Number of Monster is greater is Human... " << endl;
            cout << "You loose.. " << endl;

            cout << "If you wanna Run again then Enter Y otherwise press N: ";
            cin >> y;
            if (y == "y" || y == "y")
            {
                goto startagain;
            }
            else
            {
                cout << "Better Luck Next Time... " << endl;
            }
        }

        if (x == "H" || x == "h")
        {
        singlembackword:
            cout << "HHHMM --()SHIP()----------------------M" << endl;
            cout << "Enter Creater you wanna move : ";
            cin >> x;

            //hhh CONDITION.. false condition
            if (x == "HHH" || x == "hhh")
            {
                cout << "You enter an invalid Number" << endl;
                cout << "HHHMM --()SHIP()----------------------M" << endl;
                cout << "Input againCreater you wanna move : ";
                goto singlembackword;
            }
            if (x == "mm" || x == "MM")
            {
                goto oneCreaterforward;
            }
            if (x == "m" || "M")
            {
                goto singlembackword;
            }

            if (x == "h" || x == "H")
            {
                goto singleHmcondition;
            }

            if (x == "hm" || x == "HM" || x == "MH" || x == "mh") //false statement
            {
                cout << "The Number of Monster is greater is Human... " << endl;
                cout << "You loose.. " << endl;
                cout << "If you wanna Run again then Enter Y otherwise press N: ";
                cin >> y;
                if (y == "y" || y == "Y")
                {
                    goto startagain;
                }
                else
                {
                    cout << "Better Luck Next Time... " << endl;
                }
            }

            if (x == "m" || "M")
            {
                cout << "HHHM ----------------------()SHIP()-- MM" << endl;
                cout << "Enter Creater you wanna move back: ";
                cin >> x;

                if (x == "hm" || x == "HM" || x == "MH" || x == "mh") //false statement
                {
                    cout << "The Number of Monster is greater is Human... " << endl;
                    cout << "You loose.. " << endl;
                    cout << "If you wanna Run again then Enter Y otherwise press N: ";
                    cin >> y;
                    if (y == "y" || y == "Y")
                    {
                        goto startagain;
                    }
                    else
                    {
                        cout << "Better Luck Next Time... " << endl;
                    }
                }
            }
        }
        //ending of hm condition..
    }

    //hh condition...
    if (x == "HH" || x == "hh")
    {
        cout << "The Number of Monster is greater is Human... " << endl;
        cout << "You loose.. " << endl;

        cout << "If you wanna Run again then Enter Y otherwise press N: ";
        cin >> y;
        if (y == "y" || y == "Y")
        {
            goto startagain;
        }
        else
        {
            cout << "Better Luck Next Time... " << endl;
        }
    }

    //signle h condition
    if (x == "H" || x == "h")
    {
        cout << "The Number of Monster is greater is Human... " << endl;
        cout << "You loose.. " << endl;
        cout << "If you wanna Run again then Enter Y otherwise press N: ";
        cin >> y;
        if (y == "y" || y == "Y")
        {
            goto startagain;
        }
        else
        {
            cout << "Better Luck Next Time... " << endl;
        }
    }

    //single m condition..
    if (x == "m" || x == "M")
    {
        cout << "HHMM ----------------------()SHIP()--M" << endl;
        cout << "Enter Creater you wanna move back : ";
        cin >> x;

        if (x == "m" || x == "M")
        {
            goto startagain;
        }
    }

    //mm condition...
    if (x == "MM" || x == "mm")
    {
        // starting of second condition..
        cout << "HHHM ----------------------()SHIP()--MM" << endl;
        cout << "Enter Creater you wanna move back : ";
        cin >> x;

        if (x == "M" || x == "m" || x == "mm" || x == "MM" || x == "hm" || x == "HM" || x == "MH" || x == "mh")
        {
            if (x == "hm" || x == "HM" || x == "MH" || x == "mh")
            {
                cout << "You enter anivalid number: "; //invalid Number condition
                cin >> x;
            }

            if (x == "hh" || x == "HH") //False Condition..
            {
                cout << "You enter anivalid number: "; //invalid Number condition
                cin >> x;
            }
            if (x == "mm" || x == "MM")
            {
                goto startagain;
            }
            if (x == "M" || x == "m")
            {
            twomonsterup:
                cout << "HHHMM --()SHIP()----------------------M" << endl;
                cout << "Input Creater you wanna move : ";
            }
        }

        ///starting of third condition..
        cin >> x;
        if (x == "M" || x == "m" || x == "mm" || x == "MM" || x == "hm" || x == "HM" || x == "MH" || x == "mh" || x == "HH" || x == "hh" || x == "HHH" || x == "hhh")
        {
            if (x == "HHH" || x == "hhh") //false condition..
            {
                cout << "You enter an invalid Number" << endl;
                cout << "Only two creaters are allowed in the boat," << endl;
                cout << "HHHMM --()SHIP()----------------------M" << endl;
                cout << "Input again Creater you wanna move : ";
                cin >> x;
            }
            if (x == "hh" || x == "HH") //False Condition..
            {
                cout << "Number of Monster is Greater then Human.. " << endl;
                cout << "You loose... " << endl;
                cout << "If you wanna Run again then Enter Y otherwise press N: ";
                cin >> y;
                if (y == "y" || y == "Y")
                {
                    goto startagain;
                }
                else
                {
                    cout << "Better Luck Next Time... " << endl;
                }
            }

            if (x == "hm" || x == "HM" || x == "MH" || x == "mh") //FALSE CONDITION...
            {
                cout << "HHM ----------------------()SHIP()--HMM" << endl;
                cout << "Number of Monster is Greater then Human.!" << endl;
                cout << "You Loose...." << endl;
                cout << "If you wanna Run again then Enter Y otherwise press N: ";
                cin >> y;
                if (y == "y" || y == "Y")
                {
                    goto startagain;
                }
                else
                {
                    cout << "Better Luck Next Time... " << endl;
                }
            }
            if (x == "m" || x == "M") //repeatation
            {
                cout << "You should Enter the Two creater in this point, otherwise it will start repeating.. " << endl;
                cout << "Input Creater you wanna move : ";
                cin >> x;
            }

            if (x == "MM" || x == "mm")
            {
            oneCreaterforward:
                cout << "HHH ----------------------()SHIP()--MMM" << endl; //condition forward executionn
                cout << "Input Creater you wanna move Back : ";
            }
        }

        ///starting of fourth condition..
    enteragaincondition4:
        cin >> x; //4
        if (x == "M" || x == "m" || x == "mm" || x == "MM" || x == "hm" || x == "HM" || x == "MH" || x == "mh" || x == "HH" || x == "hh" || x == "MMM" || x == "mmm")
        {
            if (x == "mmm" || x == "MMM") //false statement..
            {
                cout << "Only two creaters are allowed in the boat," << endl;
                cout << "You enter an invalid number: " << endl;
                cout << "HHH ----------------------()SHIP()--MMM" << endl;
                cout << "Input again Creater you wanna move Back :";
                goto enteragaincondition4;
            }
            if (x == "mm" || x == "MM")
            {
                cout << "HHHMM --()SHIP()----------------------M" << endl;
                cout << "Input Creater you wanna move : ";
                cin >> x;

                if (x == "HHH" || x == "hhh") //false condition...
                {
                    cout << "You enter an invalid Number" << endl;
                    cout << "HHH --()SHIP()----------------------MMM" << endl;
                    cout << "Input againCreater you wanna move : ";
                    cin >> x;
                }

                if (x == "m" || x == "mm")
                {
                    cout << "HHHM ----------------------()SHIP()--MM" << endl;
                    cout << "Input Creater you wanna move back : ";
                    cin >> x;
                }
                if (x == "mm" || x == "MM")
                {
                    cout << "HHHMMM --()SHIP()----------------------" << endl;
                    cout << "Congratulation... " << endl;
                    cout << "You have successfully transfer the creaters accross the river.." << endl;

                    cout << "If you wanna Run again then Enter Y otherwise press N: ";
                    cin >> y;
                    if (y == "y" || y == "Y")
                    {
                        goto startagain;
                    }
                    else
                    {
                        cout << "Thnaks For Playing... " << endl;
                    }
                }
            }

            if (x == "M" || x == "m")
            {
                cout << "HHHM --()SHIP()----------------------MM" << endl; //this condition will execute next condition..
                cout << "Input Creater you wanna move :  ";
            }

            if (x == "hh" || x == "HH") //invalid Number condition
            {
                cout << "You enter anivalid number, Please Enter Again: ";
                goto enteragaincondition4;
            }

            if (x == "hm" || x == "HM" || x == "MH" || x == "mh") //invalid Number condition
            {
                cout << "You enter anivalid number, Please Enter Again: ";
                goto enteragaincondition4;
            }
        }

    //starting of Fifth Condition....
    againcondition5:
        cin >> x; //5
        if (x == "HM" || x == "hm" || x == "MH" || x == "mh" || x == "m" || x == "M" || x == "HH" || x == "hh" || x == "mm " || x == "MM" || x == "HHH" || x == "hhh")
        {
            if (x == "HHH" || x == "hhh") //false condition...1q
            {
                cout << "You enter an invalid Number" << endl;
                cout << "HHHM --()SHIP()----------------------MM" << endl;
                cout << "Input againCreater you wanna move : ";
                goto againcondition5;
            }
            if (x == "HM" || x == "hm" || x == "MH" || x == "mh") //false statement
            {
                cout << "HH ----------------------()SHIP()--HMMM" << endl;
                cout << "Number of Monster is Greater then Human.!" << endl;
                cout << "You Loose...." << endl;

                cout << "If you wanna Run again then Enter Y otherwise press N: ";
                cin >> y;
                if (y == "y" || y == "Y")
                {
                    goto startagain;
                }
                else
                {
                    cout << "Better Luck Next Time... " << endl;
                }
            }
            if (x == "H" || x == "h") //false statememnt
            {
                cout << "HHM ----------------------()SHIP()--HMM" << endl;
                cout << "Number of Monster is Greater then Human.!" << endl;
                cout << "You Loose...." << endl;
                cout << "If you wanna Run again then Enter Y otherwise press N: ";
                cin >> y;
                if (y == "y" || y == "Y")
                {
                    goto startagain;
                }
                else
                {
                    cout << "Better Luck Next Time... " << endl;
                }
            }
            if (x == "m" || x == "M")
            {
                goto oneCreaterforward;
            }

            if (x == "HH" || x == "hh")
            {
                cout << "HM ----------------------()SHIP()--HHMM" << endl; // this condition execute next..
                cout << "Input Creater you wanna move Back: ";
                cin >> x;
                if (x == "MM" || x == "mm") //false condition.
                {
                    cout << "HH ----------------------()SHIP()--HMMM" << endl;
                    cout << "Number of Monster is Greater then Human.!" << endl;
                    cout << "You Loose...." << endl;
                    cout << "If you wanna Run again then Enter Y otherwise press N: ";
                    cin >> y;
                    if (y == "y" || y == "Y")
                    {
                        goto startagain;
                    }
                    else
                    {
                        cout << "Better Luck Next Time... " << endl;
                    }
                }
                if (x == "HM" || x == "hm" || x == "MH" || x == "mh")
                {
                    cout << "HHMM ----------------------()SHIP()--HM" << endl;
                    cout << "Input Creater you wanna move: ";
                    cin >> x;
                    if (x == "mm" || x == "MM")
                    {
                        cout << "HH ----------------------()SHIP()--HMMM" << endl;
                        cout << "Number of Monster is Greater then Human.!" << endl;
                        cout << "You Loose...." << endl;
                        cout << "If you wanna Run again then Enter Y otherwise press N: ";
                        cin >> y;
                        if (y == "y" || y == "Y")
                        {
                            goto startagain;
                        }
                        else
                        {
                            cout << "Better Luck Next Time... " << endl;
                        }
                    }
                    if (x == "HH" || x == "hh")
                    {
                        goto singlemRepeat;
                    }
                }

                if (x == "HH" || x == "hh")
                {
                singlemRepeat:
                    cout << "HHHM --()SHIP()----------------------MM" << endl;
                    cout << "Input Creater you wanna move : ";
                    cin >> x;

                    if (x == "HM" || x == "hm" || x == "MH" || x == "mh") //false statement
                    {
                        cout << "HH --()SHIP()----------------------HMMM" << endl;
                        cout << "Number of Monster is Greater then Human.!" << endl;
                        cout << "You Loose...." << endl;
                        cout << "If you wanna Run again then Enter Y otherwise press N: ";
                        cin >> y;
                        if (y == "y" || y == "Y")
                        {
                            goto startagain;
                        }
                        else
                        {
                            cout << "Better Luck Next Time... " << endl;
                        }
                    }
                    if (x == "h" || x == "H") //false statement
                    {
                        cout << "HHM ---()SHIP()---------------------HMM" << endl;
                        cout << "Number of Monster is Greater then Human.!" << endl;
                        cout << "You Loose...." << endl;
                        cout << "If you wanna Run again then Enter Y otherwise press N: ";
                        cin >> y;
                        if (y == "y" || y == "Y")
                        {
                            goto startagain;
                        }
                        else
                        {
                            cout << "Better Luck Next Time... " << endl;
                        }
                    }

                    if (x == "M" || x == "m")
                    {

                        goto oneCreaterforward;

                        if (x == "m" || x == "M") //repeatationn
                        {
                            goto singlemRepeat;
                        }
                    }

                    if (x == "MM" || x == "mm")
                    {
                        cout << "HHHMM --()SHIP()----------------------M" << endl;
                        cout << "Input againCreater you wanna move : ";
                        cin >> x;

                        if (x == "HHH" || x == "hhh") //false condition..
                        {
                            cout << "You enter an invalid Number" << endl;
                            cout << "Only two creaters are allowed in the boat," << endl;
                            cout << "You enter anivalid number: ";
                            cin >> x;
                        }

                        if (x == "HM" || x == "hm" || x == "MH" || x == "mh") //false condition
                        {
                            cout << "HHM ----------------------()SHIP()--HMM" << endl;
                            cout << "Number of Monster is Greater then Human.!" << endl;
                            cout << "You Loose...." << endl;
                            cout << "If you wanna Run again then Enter Y otherwise press N: ";
                            cin >> y;
                            if (y == "y" || y == "Y")
                            {
                                goto startagain;
                            }
                            else
                            {
                                cout << "Better Luck Next Time... " << endl;
                            }
                        }
                        if (x == "HH" || x == "hh") //fasle condition
                        {
                            cout << "HM ---------------------()SHIP()---HHM" << endl;
                            cout << "Number of Monster is Greater then Human.!" << endl;
                            cout << "You Loose...." << endl;
                            cout << "If you wanna Run again then Enter Y otherwise press N: ";
                            cin >> y;
                            if (y == "y" || y == "Y")
                            {
                                goto startagain;
                            }
                            else
                            {
                                cout << "Better Luck Next Time... " << endl;
                            }
                        }
                        if (x == "h" || x == "H")
                        {
                            cout << "HHMM ----------------------()SHIP()-- HM" << endl;
                            cout << "Input Creater you wanna move Back: ";
                            cin >> x;

                            if (x == "h" || x == "H")
                            {
                                cout << "HHHMM --()SHIP()---------------------- M" << endl;
                                cout << "Input Creater you wanna move : ";
                                cin >> x;

                                if (x == "HHH" || x == "hhh")
                                {
                                    cout << "You enter an invalid Number" << endl;
                                    cout << "HHHMM --()SHIP()----------------------M" << endl;
                                    cout << "Input againCreater you wanna move : ";
                                    cin >> x;
                                }

                                if (x == "mm" || x == "MM")
                                {
                                    goto oneCreaterforward;
                                }
                            }
                        }
                    }
                    if (x == "M" || x == "m")
                    {
                        cout << "HHHM ----------------------()SHIP()-- MM" << endl;
                        cout << "Input Creater you wanna move back : ";
                        cin >> x;
                    }
                    if (x == "MM" || x == "mm")
                    {
                        cout << "HHHMMM --()SHIP()---------------------- " << endl;

                        cout << "Congratulation... " << endl;
                        cout << "You have successfully transfer the creaters accross the river.." << endl;

                        cout << "If you wanna Run again then Enter Y otherwise press N: ";
                        cin >> y;
                        if (y == "y" || y == "Y")
                        {
                            goto startagain;
                        }
                        else
                        {
                            cout << "Thnaks For Playing... " << endl;
                        }
                    }
                }
            }
        }
    }
}
