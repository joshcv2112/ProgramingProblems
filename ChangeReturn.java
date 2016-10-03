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
        int oneDollar = 0, fiveDollar, tenDollar, twentyDollar, fiftyDollar;

        System.out.print("Enter total due: ");
        totalDue = console.nextDouble();
        System.out.print("Enter money given: ");
        cashGiven = console.nextDouble();

        changeTotal = cashGiven - totalDue;
        changeCents = changeTotal - Math.floor(changeTotal);

        int changeDollars = (int) changeTotal;

        // Figure out dollar bills..
        if (changeDollars < 5)
            oneDollar = changeDollars;

        System.out.println("Change: " + oneDollar);
    }
}