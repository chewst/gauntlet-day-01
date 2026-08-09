// bad_style.cpp: rename everything to the convention, keep behaviour identical
class enemy_spawner {
  public:
    enemy_spawner(int MaxCount) { COUNT = MaxCount; spawned = 0; }
    int Spawn(){ if (spawned < COUNT) spawned++; return spawned; }
    int GetSpawned(){ return spawned; }   // should this be const?
  private:
    int COUNT;
    int spawned;
};