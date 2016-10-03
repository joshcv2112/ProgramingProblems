/*
Author: Joshua Vaughan
Started: 10/2/2016
Change Return Program: The user enters a cost and then the amount of money given. The program will
figure out the change and the number of quarters, dimes, nickels, pennies needed for the change.
*/

import java.util.*;

public class ChangeReturn 
{
    static Scanner console = new Scanner(System.in);

    public static void main(String[] args)
    {
        //double changeCents;
        int oneDollar = 0, fiveDollar = 0, tenDollar = 0, twentyDollar = 0, fiftyDollar = 0, hundredDollar = 0;
        int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
        
        // Gather input as string
        System.out.print("Enter amount due: ");
        String str1 = console.nextLine();
        System.out.print("Enter cash given: ");
        String str2 = console.nextLine();
        
        double num1 = Double.parseDouble(str1);
        double num2 = Double.parseDouble(str2);
        double num3 = num2 - num1;

        int changeDollars = (int) num3;
        double changeCents = num3 - changeDollars;

        // Calculate Dollars
        while (changeDollars >= 1)
        {
            if (changeDollars >= 100)
            {
                hundredDollar++;
                changeDollars -= 100;
            }
            if (changeDollars >= 50)
            {
                fiftyDollar++;
                changeDollars -= 50;
            }
            else if (changeDollars >= 20)
            {
                twentyDollar++;
                changeDollars -= 20;
            }
            else if (changeDollars >= 10)
            {
                tenDollar++;
                changeDollars -= 10;
            }
            else if (changeDollars >= 5)
            {
                fiveDollar++;
                changeDollars -= 5;
            }
            else if (changeDollars >= 1)
            {
                oneDollar++;
                changeDollars -= 1;
            }
        }

        // Calculate Cents
        while (changeCents >= 0.01)
        {
            if (changeCents >= 0.25)
            {
                quarters++;
                changeCents -= 0.25;
            }
            else if (changeCents >= 10)
            {
                dimes++;
                changeCents -= 0.10;
            }
            else if (changeCents >= 5)
            {
                nickels++;
                changeCents -= 5;
            }
            else if (changeCents >= 0)
            {
                pennies++;
                changeCents -= 1;
            }
        }

        // Display dollars
        System.out.println("\n**Change Due**");
        if (fiftyDollar > 0)
            System.out.println("$50: " + fiftyDollar);
        if (twentyDollar > 0)
            System.out.println("$20: " + twentyDollar);
        if (tenDollar > 0)
            System.out.println("$10: " + tenDollar);
        if (fiveDollar > 0)
            System.out.println("$5: " + fiveDollar);
        if (oneDollar > 0)
            System.out.println("$1: " + oneDollar);
        if (quarters > 0)
            System.out.println("$0.25: " + quarters);
        if (dimes > 0)
            System.out.println("$0.10: " + dimes);
        if (nickels > 0)
            System.out.println("$0.05: " + nickels);
        if (pennies > 0)
            System.out.println("$0.01: " + pennies);
    }
}