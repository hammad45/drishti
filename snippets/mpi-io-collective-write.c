MPI_File_open(MPI_COMM_WORLD, "output-example.txt", MPI_MODE_CREATE|MPI_MODE_WRONLY, MPI_INFO_NULL, &fh);
...
MPI_File_write_all(fh, &buffer, size, MPI_CHAR, &s);