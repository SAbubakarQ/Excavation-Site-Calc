//Bismillah - AbubakarQ

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main ()
{
    
    //Introduction to Program
    cout << " Background:" << endl;
    cout << "           The video game market in the early 1980s was growing exponentially, driven by the sales of Atari 2600 games like\n";
    cout << "   “Asteroids”, “Space Invaders” and “Pac Man”. To cash in on this craze, Atari started producing new video games as quickly as they could.\n";
    cout << "   Unfortunately, they created some horrible games, including “E.T. the Extra-Terrestrial”, often cited as one of the worst video games of all time.\n";
    cout << "   The market for video games crashed in 1983, and Atari was left with millions of unsold game cartridges. For some reason, they decided to\n";
    cout << "   bury them in a New Mexico landfill, where they remained until discovered and partially excavated in 2013.\n";
    
    cout << endl;
    cout << " Current Job:\n";
    cout << "   Excavation site:      New Mexico\n";
    cout << "   Goal:                 Calculate Total Income Earned from Excavation\n";
    cout << "   Time Frame            52 Weeks (1 Year)\n";
    cout << endl;
    
    //Part-1 Workers on Job Site
    int Workers = 0;
    cout << "  Enter number of workers on job site (Enter number between 1 and 5). \n";
    cout << "   Workers: ";
    cin >> Workers;
    while ((Workers > 5) || (Workers < 1))
    {
        cout << "  ERROR!\n";
        cout << "  Too many or not enough workers. Enter number between 1 and 5\n";
        cout << "   Workers: ";
        cin >> Workers;
    }
    cout << "    Workers on job site: " << Workers << endl;
    cout << endl;
    
    //Part-4 Workers' Wage
    float workersWage = 0.0;
    cout << "  Enter worker's Wage per Hour (Must be between 9.00 and 35.00)\n";
    cout << "   Wage: ";
    cin >> workersWage;
    while ((workersWage < 9) || (workersWage > 35))
    {
        cout << "  INVALID PERIMETER!\n";
        cout << "  Wage is outside of budget.\n";
        cout << "   Wage: ";
        cin >> workersWage;
    }
    cout << "    Workers' Hourly Wage: " << workersWage * Workers << endl;
    cout << endl;
    
    //Part-2 Man Hours Spent Digging and Cartridges Found
    cout << "   When the weather is Hot\t20 hours will be worked.\n";
    cout << "   When the weather is Cold\t30 hours will be worked.\n";
    cout << endl;
    int WeekHours = 0;
    int YearHoursW = 0;
    int weekNum = 0;
    int TotalGameCartF = 0;
    int GameCartFWeek = 0;
//  float PriceGame = 0.00;
    float WeeklyIncome = 0.0;
    float yearlyIncome = 0.0;
    float workerY_W = 0.0;
    
    int seed;
    cout << " Enter Seed: ";
    cin >> seed;
    srandom(seed);
    cout << endl;
    
    for (int Year = 1; Year <= 52; Year++)
    {
        int WeekWeatherCond = random() % 2;
        int gameCartF = random() % 6 + 1;
        if (WeekWeatherCond == 1)
        {
            WeekHours = 30;
            YearHoursW = WeekHours + YearHoursW;
            weekNum = weekNum + 1;
            GameCartFWeek = gameCartF * WeekHours * Workers;
            TotalGameCartF = TotalGameCartF + GameCartFWeek;
            cout << "       " << "Week " << setw(2) << weekNum << endl;
            cout << "\t" << "Hours Worked: " << "          " << WeekHours << setw(4) << " Hours worked.\n";
            cout << "\t" << "Game Cartridges:" << "        " << GameCartFWeek << " Found." << endl;
                if ((GameCartFWeek > 0) && (GameCartFWeek <= 99))
                {
                    WeeklyIncome = GameCartFWeek * 10.00;
                    cout << "\t" << "Weekly Income:" << "          $" << WeeklyIncome << "\n";
                }
                else if ((GameCartFWeek >= 100) && (GameCartFWeek <= 199))
                {
                    WeeklyIncome = GameCartFWeek * (20.00 - (gameCartF/10.0));
                    cout << "\t" << "Weekly Income:" << "          $" << WeeklyIncome << "\n";
                }
                else if (GameCartFWeek >= 200)
                {
                    WeeklyIncome = GameCartFWeek * 1.00;
                    cout << "\t" << "Weekly Income:" << "          $" << WeeklyIncome << "\n";
                }
        }
        else 
        {
            WeekHours = 20;
            YearHoursW = WeekHours + YearHoursW;
            weekNum = weekNum + 1;
            GameCartFWeek = gameCartF * WeekHours * Workers;
            TotalGameCartF = TotalGameCartF + GameCartFWeek;
            cout << "       " << "Week " << setw(2) << weekNum << endl;
            cout << "\t" << "Hours Worked: " << "          " << WeekHours << setw(4) << " Hours worked.\n";
            cout << "\t" << "Game Cartridges:" << "        " << GameCartFWeek << " Found." << endl;
                if ((GameCartFWeek > 0) && (GameCartFWeek <= 99))
                {
                    WeeklyIncome = GameCartFWeek * 10.0;
                    cout << "\t" << "Weekly Income:" << "          $" << WeeklyIncome << "\n";
                }
                else if ((GameCartFWeek >= 100) && (GameCartFWeek <= 199))
                {
                    WeeklyIncome = GameCartFWeek * (20.00 - (gameCartF/10.0));
                    cout << "\t" << "Weekly Income:" << "          $" << WeeklyIncome << "\n";
                }
                else if (GameCartFWeek >= 200)
                {
                    WeeklyIncome = GameCartFWeek * 1.00;
                   cout << "\t" << "Weekly Income:" << "          $" << WeeklyIncome << "\n";
                }
        }
    //Workers Weekly Wage Calculation
        float workerW_W = workersWage * Workers * WeekHours;
        cout <<"\t" << "Workers' Weekly Wage:" << "  -$" << workerW_W << "\n";
        workerY_W = workerY_W + workerW_W;
    //Weekly Profit Calculation
        float WeekProfit = WeeklyIncome - workerW_W;
        cout << "\t" << "Weekly Profit: " << "         $" << WeekProfit << "\n";
            
        yearlyIncome = yearlyIncome + WeeklyIncome;
        cout << endl;
        cout << endl;
    }
    
    //Calculation of Year Total 
    cout << endl;
    cout << "  Yearly Calculation:" << endl;
    cout << "   Hours worked in a year:" << setw(20) << YearHoursW << "\n";
    cout << "   Game Cartridges found in a year: " << setw(10) << TotalGameCartF << "\n";
    cout << "   Total Yearly Income: " << setw(17) << "$" << yearlyIncome << "\n";
    cout << "   Workers' Payroll: " << setw(20) << "-$" << workerY_W << "\n";
    cout << " Total Profit/Loss this Year: " << setw(11) << "$" << yearlyIncome - workerY_W;
    cout << endl;
    
    cout << endl;
    cout << " Job Report Completed, Thank you for using SABQ Sales!";
    
    
    
    
}