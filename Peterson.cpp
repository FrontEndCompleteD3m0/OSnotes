/*Peterson Solution . Peterson solution ko exact solution in C++ code with explanation
Can you tell me the exact definition of it */
#define false 0
#define True 1
#define N 2
int turn;
int interested[N];
void enter_region(int process)
{
    int other;
    other = 1 - process;
    interested[process] = True;
    turn = process;
    while (turn == process && interested[other] == true)
    {
    }
}
void Leave_region(int process)
{
    interested[process] = false;
}