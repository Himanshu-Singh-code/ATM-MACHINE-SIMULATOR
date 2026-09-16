# ATM Machine Simulator (C)

A simple console-based ATM machine simulator written in C. The program logs the user in with a PIN, then lets them check their balance, deposit money, or withdraw money through a menu-driven interface — with basic validation for invalid amounts and insufficient balance.

## Features

- PIN-based login (exits immediately on wrong PIN)
- Check account balance
- Deposit money (rejects invalid/negative amounts)
- Withdraw money (rejects invalid amounts and insufficient balance)
- Menu keeps running until the user chooses to exit
- Input validation for invalid menu choices

## How It Works

1. The program asks for a 4-digit PIN.
2. If the PIN is incorrect, access is denied and the program exits.
3. If correct, the user sees a menu with 4 options:
   - `1` Check Balance
   - `2` Deposit Money
   - `3` Withdraw Money
   - `4` Exit
4. The menu repeats after every action until the user selects Exit.

## Sample Run
========================================
ATM MACHINE

Enter your PIN : 1234

Login Succesful !

WELCOME TO THE ATM !

1 . Check your Balance
2 . Deposit The Money
3 . Withdraw The Money
4 . Exit

Enter your Choice : 1

Your Account Balance is : 500000.00


## How to Compile and Run

Using GCC:

```bash
gcc atm_machine.c -o atm
./atm
```

(On Windows, run `atm.exe` instead of `./atm`)

## Default Credentials

- PIN: `1234`
- Starting Balance: `500000.00`

## What I Learned

- Using `do-while` loops for menu-driven programs
- `switch-case` statements with proper `break` handling
- Basic input validation with `if-else`
- Working with `float` variables and formatted output (`%.2f`)

## Author

Made by Himanshu as a beginner C programming practice project.

## License

This project is licensed under the MIT License.
