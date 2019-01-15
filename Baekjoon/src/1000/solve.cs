using System;

public class Program
{
    public static void Main()
    {
        var input = Console.ReadLine().Split();
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        Console.WriteLine(a + b);
    }
}