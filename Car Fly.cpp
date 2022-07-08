if (g_carfly)
    {
        uintptr_t CurrentVehicle = read<DWORD_PTR>(g_pid, Globals::LocalPawn + 0x2158);

        if (CurrentVehicle)
        {
            write<bool>(g_pid, CurrentVehicle + 0x668, false);
        }
        else
        {
            write<bool>(g_pid, CurrentVehicle + 0x668, true);
        }
    }