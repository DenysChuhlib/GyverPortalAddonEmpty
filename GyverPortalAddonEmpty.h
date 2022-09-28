#pragma once

const char GP_ADDON_LIGHT[] PROGMEM =
"<style type=\"text/css\">\n"
" \n"
" \n"
" \n"
" \n"
"</style>\n";

const char GP_ADDON_DARK[] PROGMEM =
"<style type=\"text/css\">\n"
" \n"
" \n"
" \n"
" \n"
"</style>\n";

struct BuilderADDON {
	void BUILD_BEGIN(const String& page_name = "ESP", uint16_t width = 350, bool local = false) {
		PAGE_BEGIN(page_name);
		if (local) GP.JS_TOP_FILE();
		else GP.JS_TOP();
		GP.PAGE_BLOCK_BEGIN(width);
	}
	
	void PAGE_BEGIN(const String& page_name) {
		String s;
		s += F("<!DOCTYPE HTML><html><head>\n"
		"<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n"
		"<meta charset=\"utf-8\">\n");
		s += F("<title>");
		s += page_name;
		s += F("</title>\n");
		s += F("</head><body>\n");	
		GP.SEND(s);
	}
};
BuilderADDON GP_ADDON;