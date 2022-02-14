// package com.company;
import java.util.Scanner;

class Pattern_01 {
    public static void main(String[] args) {
        int i, j,n;
        Scanner a=new Scanner(System.in);
        System.out.println("Enter any value upto which term you want to print pattern");
        n=a.nextInt();
        for (i=1;i<=n;i++){
            for (j=1;j<=n;j++){
                System.out.print(j);
                System.out.print(" ");
            }
            System.out.println();
        }

    }
}