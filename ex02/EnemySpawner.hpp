#pragma once

class EnemySpawner {
  public:
    EnemySpawner(int maxCount);
    int spawn();
    int getSpawned() const;  // it is const because it doesn't mutate, it only reads spawned
    
  private:
    int m_count;
    int m_spawned;
};