// Copyright 2022 KyoungChan Cho. All Rights Reserved.

#include <iostream>

/**
 * Integer data types code
 * @return Exit status
*/
int main()
{
    const int SecondsPerMinute{ 60 }; // <- 가시성과 유지보수성이 좋다
    int TotalSecondsPlayed{ 100 };

    // calculate minutes and seconds played
    int MinutesPlayed = TotalSecondsPlayed / SecondsPerMinute;
    int SecondsPlayed = TotalSecondsPlayed % SecondsPerMinute;

    // print results
    std::cout << "Minutes Played: " << MinutesPlayed << "\n";
    std::cout << "Seconds Played: " << SecondsPlayed << "\n";
}

