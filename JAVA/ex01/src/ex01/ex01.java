package ex01;

import java.util.Scanner;

public class ex01 {
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		System.out.printf("input(-213)");
		int num = scanner.nextInt();
		
		System.out.printf("input(+5)");
		int n = scanner.nextInt();
		
		int check = 0x8000000;
		System.out.println(Integer.toBinaryString(num));
		for (int i = 0; i < n; i++) {
			if ((num & check) == 0)
				num = num << 1;
			else {
				num = num << 1;
				num = num | 1;
				
				System.out.println(Integer.toBinaryString(num));
			}
		}
	}
}
