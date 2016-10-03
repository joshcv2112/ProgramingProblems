/*
Author: Joshua Vaughan
Started: 10/2/2016
Change Return Program: The user enters a cost and then the amount of money given. The program will
figure out the change and the number of quarters, dimes, nickels, pennies needed for the change.
*/

import java.util.*;
import java.lang.Math;

public class ChangeReturn 
{
    static Scanner console = new Scanner(System.in);

    public static void main(String[] args)
    {
        double totalDue, cashGiven, changeTotal;
        double changeCents;
        int oneDollar = 0, fiveDollar = 0, tenDollar = 0, twentyDollar = 0, fiftyDollar = 0;

        System.out.print("Enter total due: ");
        totalDue = console.nextDouble();
        System.out.print("Enter money given: ");
        cashGiven = console.nextDouble();

        changeTotal = cashGiven - totalDue;
        changeCents = changeTotal - Math.floor(changeTotal);

        int changeDollars = (int) changeTotal;

        int temp = 0;
        // Figure out dollar bills..
        if (changeDollars < 5 && changeDollars > 0)
        {
            oneDollar += changeDollars;
        }
        else if (changeDollars == 5)
            fiveDollar++;
        else if (changeDollars > 5 && changeDollars < 10)
            fiveDollar++;
            oneDollar += (changeDollars - 5);
        // CONTINUE THIS
        

        System.out.println("Change: " + oneDollar);
    }
}