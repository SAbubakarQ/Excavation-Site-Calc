## Excavation-Site-Calc

### Excavation Site Calculator - Profit/Loss 

This project was to calculate an excavation site's weekly and yearly profit/loss. The starting inputs required  the number of workers between one and five and their hourly wage which was between USD 9.00 and USD 35.00. If more than 0 and less than or equal to 99 game cartridges were found in a given week it's price would be:

* WeeklyIncome = GameCartFWeek * 10.00;

If greater than or equal to 100 to less than or equal to 199 game cartridges found the equation would be as follows: 

* WeeklyIncome = GameCartFWeek * (20.00 - (gameCartF/10.0));

Finally, if more than or equal to 200 game cartridges were found the equation would be:

* WeeklyIncome = GameCartFWeek * 1.00;

After all inputs are put in, the final input is the seed. The seed will randomize the weekly weather results. If it is cold the workers will work 30 hours that week. If the weather is hot the workers will work 20 hours. Two random seeds are placed for the number of game cartridges found and the weather of the week (Hot or Cold).

Once the system compiles, the result will be 52 weeks of work with each week showing hours worked, game cartridges found, weekly earnings from selling game cartridges, the weekly amount for workers payroll, and the weekly profits/loss after all expenses paid. 

At the end of the 52 weeks, the terminal will display the total hours worked in a year, total game cartridges found in a year, the yearly earnings from selling game cartridges, the yearly amount of payroll for workers, and the yearly amount of profit/loss made. 

Final message saying: " Job Report Completed, Thank you for using SABQ Sales!"

