    ImGui::Begin("Mod Menu VIP - FF");

    // Tạo hàng nút bấm để chuyển Tab
    static int tab = 0;
    if (ImGui::Button("Combat", ImVec2(90, 35))) tab = 0; ImGui::SameLine();
    if (ImGui::Button("Visual", ImVec2(90, 35))) tab = 1; ImGui::SameLine();
    if (ImGui::Button("Misc", ImVec2(90, 35))) tab = 2;

    ImGui::Separator();

    // Nội dung Tab 1: Combat
    if (tab == 0) {
        static bool aimbot = false;
        static bool aimHeadDrag = false; // Biến cho Aim head drag
        static bool noRecoil = false;
        static float fov = 90.0f;
        
        ImGui::Checkbox("Bật Aimbot", &aimbot);
        if (aimbot) {
            // Checkbox Aim head drag (chỉ hiện khi bật Aimbot)
            ImGui::Checkbox("Aim Head Drag (Kéo tâm vào đầu)", &aimHeadDrag); 
            ImGui::SliderFloat("Góc nhìn (FOV)", &fov, 0.0f, 360.0f);
        }
        ImGui::Checkbox("Không giật (No Recoil)", &noRecoil);
    } 
    // Nội dung Tab 2: Visual
    else if (tab == 1) {
        static bool espLine = false;
        static bool espBox = false;
        
        ImGui::Checkbox("Kẻ chỉ (ESP Line)", &espLine);
        ImGui::Checkbox("Vẽ hộp (ESP Box)", &espBox);
    } 
    // Nội dung Tab 3: Misc
    else if (tab == 2) {
        static bool antiBan = true;
        static bool godMode = false;
        
        ImGui::Checkbox("Anti-Ban (Bảo vệ nick)", &antiBan);
        ImGui::Checkbox("Bất tử", &godMode);
        
        ImGui::Spacing();
        ImGui::TextColored(ImVec4(0.0f, 1.0f, 0.0f, 1.0f), "Trạng thái: An toàn!");
    }

    ImGui::End();
