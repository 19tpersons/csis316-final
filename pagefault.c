    //Do some stuff
    char *mem;
    uint a;
    a = PGROUNDDOWN(tf->eip);
    mem = kalloc();
    if(mem == 0){
      cprintf("allocuvm out of memory\n");
      //deallocuvm(pgdir, newsz, oldsz);
      //return 0;
    }
    memset(mem, 0, PGSIZE);

    //if(mappages(pgdir, (char*)a, PGSIZE, V2P(mem), PTE_W|PTE_U) < 0){
      cprintf("allocuvm out of memory (2)\n");
      //deallocuvm(pgdir, newsz, oldsz);
      //kfree(mem);
      //return 0;
    //}