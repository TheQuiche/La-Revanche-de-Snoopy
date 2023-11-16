//
// Created by kisha on 16/11/2023.
//
typedef struct {
    int x;
    int y;
}Position;

typedef struct {
    Position position;
    int BlocTravers;
}Bloc;

typedef struct {
    Position position;
    int BlocCassable;
}Bloc_Cassable;

typedef struct {
    Position position;
    int BlocSuprise;
    int ActiveSup;
}Bloc_Surprise;

void init_Bloc(Bloc *nvBloc, int x, int y){
    nvBloc->position.x = x;
    nvBloc->position.y = y;
    nvBloc->BlocTravers = 0;
}

void initBloc_Cassable(Bloc_Cassable *nvBloc_Cassable,int x, int y){
    nvBloc_Cassable->position.x = x;
    nvBloc_Cassable->position.y = y;
    nvBloc_Cassable->BlocCassable = 1;
}

void initBloc_Surprise(Bloc_Surprise *nvBloc_Surprise, int x, int y){
    nvBloc_Surprise->position.x = x;
    nvBloc_Surprise->position.y = y;
    nvBloc_Surprise->BlocSuprise = 1;
    nvBloc_Surprise->ActiveSup = 1;
}
