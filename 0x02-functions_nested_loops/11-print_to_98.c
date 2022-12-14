[05:23, 14/12/2022] Eunice: . #include <stdio.h>

/**
 *  * print_to_98 - Prints all natural numbers from input to 98,
 *   *               in order separated by a comma followed by a space.
 *    * @n: The number to begin counting at.
 *     */
void print_to_98(int n)
{
		if (n >= 98)
				{
							while (n > 98)
											printf("%d, ", n--);
									printf("%d\n", n);
										}

			else
					{
								while (n < 98)
												printf("%d, ", n++);
										printf("%d\n", n);
											}
}
[05:23, 14/12/2022] Eunice: 12. #include "main.h"

/**
 *  * print_times_table - Prints the times table of the input,
 *   *                     starting with 0.
 *    * @n: The value of the times table to be printed.
 *     */
void print_times_table(int n)
{
		int num, mult, prod;

			if (n >= 0 && n <= 15)
					{
								for (num = 0; num <= n; num++)
											{
															_putchar('0');

																		for (mult = 1; mult <= n; mult++)
																						{
																											_putchar(',');
																															_putchar(' ');

																																			prod = num * mult;

																																							if (prod <= 99)
																																													_putchar(' ');
																																											if (prod <= 9)
																																																	_putchar(' ');

																																															if (prod >= 100)
																																																				{
																																																										_putchar((prod / 100) + '0');
																																																															_putchar(((prod / 10)) % 10 + '0');
																																																																			}
																																																			else if (prod <= 99 && prod >= 10)
																																																								{
																																																														_putchar((prod / 10) + '0');
																																																																		}
																																																							_putchar((prod % 10) + '0');
																																																										}
																					_putchar('\n');
																							}
									}
}
