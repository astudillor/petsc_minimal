/**
 * File  : main.c
 * Author: Reinaldo <r.a.astudillo@tudelft.nl>
 */
#include "petsc.h"

int main(int argc, char *argv[])
{
  PetscErrorCode ierr;
  /*
   * Petsc initialize
   */
  ierr = PetscInitialize(&argc,&argv,PETSC_NULL,PETSC_NULL);CHKERRQ(ierr);
  ierr = PetscPrintf(PETSC_COMM_WORLD, "Hello from petsc\n");CHKERRQ(ierr);

  /*
   * Petsc finalize
   */
  ierr = PetscFinalize();CHKERRQ(ierr);
  return 0;
}
/*
   let $CC='$PETSC_DIR/$PETSC_ARCH/bin/mpicc'
   let $CXX=$PETSC_DIR/$PETSC_ARCH/'bin/mpic++'
   to build
    ! mkdir -p build && cd build && cmake ..
   to compile and link
    ! make
   to run
    ! ./main.exe
 * */
