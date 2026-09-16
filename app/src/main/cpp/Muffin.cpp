#include <jni.h>
#include <string>
#include <thread>
#include <android/log.h>
#include "Includes.h"

// Hàm vẽ giao diện chính của Mod Menu
void DrawMenu() {
    ImGui::Begin("Mod Menu VIP - FF");

    // Các Tab chức năng
    static int tab = 0;
    if (ImGui::Button("Combat", ImVec2(90, 35))) tab = 0; 
    ImGui::SameLine();
    if (ImGui::Button("Visual", ImVec2(90, 35))) tab = 1;

    ImGui::Separator();

    // Tab 1: Combat
    if (tab == 0) {
        static bool aimbot = false;
        static bool aimHeadDrag = false;
        
        ImGui::Checkbox("Bật Aimbot", &aimbot);
        if (aimbot) {
            ImGui::Checkbox("Aim Head Drag (Kéo tâm vào đầu)", &aimHeadDrag);
        }
    } 
    // Tab 2: Visual
    else if (tab == 1) {
        static bool espBox = false;
        ImGui::Checkbox("Vẽ hộp ESP", &espBox);
    }

    ImGui::End();
}

