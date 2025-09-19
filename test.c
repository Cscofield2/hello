    #include <math.h>
    #include <stdlib.h>
    #include <stdio.h>

    int main(int argc, char **argv) {

   double GigaBytes = atof(argv[1]);
    double CurrentDay = = atof(argv[2]);
    double UsedBytes = = atof(argv[3]);
    double FinalDay, FinalBytes, CurrentBytes, DailyBytes, LeftoverBytes, GoalBytes;

    if (GigaBytes > 0) {
    FinalBytes = GigaBytes - UsedBytes;
    DailyBytes = GigaBytes / 30;
    LeftoverBytes = (GigaBytes - UsedBytes) / (30 - CurrentDay);
    CurrentBytes = UsedBytes / CurrentDay;
    ProjectedOverage = (CurrentBytes * 30) - GigaBytes
