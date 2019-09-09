#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Screen {
	protected:
		int frame_thickness;
		int resolution;
	public:
		virtual void run_out_of_ideas() = 0;
};

class Keyboard {
	protected:
		string original_keyboard_language;
	public:
		virtual void it_s_3_am_help () = 0;
};

class Notebook : public Screen, public Keyboard {
	public:
		Notebook (string l, int a) {
			original_keyboard_language = l;
			frame_thickness = a;
		}
		void run_out_of_ideas() {
			cout << "Notebook is pretty cool though";
		}
};

class Phone : public Screen, public Keyboard{
	bool existance;
	public:
		Phone (bool existance, string l, int a) {
			if (existance) {
				original_keyboard_language = l;
			}
			else { original_keyboard_language = "That's new era phones wow"; }
			frame_thickness = a;
		}
		void it_s_3_am_help() {
			cout << "I'm watching the first iPhone presentation, that's great";
		}
};

class PC : public Screen, public Keyboard {
	public:
		PC (string l, int a) {
			original_keyboard_language = l;
			frame_thickness = a;
		}
		void run_out_of_ideas() {
			cout << "Hope you don't really take it seriously, I'm just bored";
		}
		void it_s_3_am_help() {
			cout << "Okey, google, ticket to Mars";
		}
};
