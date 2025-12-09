#include <chrono>
#include <cstdio>

int main() {

   float accumulator = 0;
   float dt = 0.5; // change this according to how long you want each frame to be
   bool quit = false;
   std::chrono::steady_clock::time_point current_time = std::chrono::steady_clock::now();
  
   std::size_t current_frame = 0;
   while (!quit) {
      std::chrono::steady_clock::time_point new_time = std::chrono::steady_clock::now();
       float dur_seconds = std::chrono::duration<float>(new_time - current_time).count();
       

       accumulator += dur_seconds;
       
       while (accumulator > dt) {
           accumulator -= dt;
           current_frame += 1;
           
           printf("%zu \n", current_frame);
       }
       current_time = new_time;
     }
   
}
