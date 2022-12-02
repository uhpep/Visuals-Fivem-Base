#include "includes.h"
#include <filesystem>
#include "shell.h"
#include <manager.h>
Manager::SDK SDK;
Manager::conhost console;


namespace Menu
{
	bool MenuBool = false;
	void MainWindow()
	{
		ImGui::SetNextWindowSize(ImVec2(500, 400));
		ImGui::Begin("FiveM Hook Base By Visual#9999");
		ImGui::Checkbox("Invisible", &FiveMHacks::Invisivle);
		if (ImGui::Button("Test Print")) {
			console.Print("Console", "Test!");
		}
		
		ImGui::End();
	}
}