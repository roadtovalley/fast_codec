#ifndef FAST_CODEC_CONFIG_HEADER
#define FAST_CODEC_CONFIG_HEADER

#include <string>

struct Config
{
	std::string templates_ = "templates.xml";
	std::string tags_h_ = "tags.h";
	std::string templates_h_ = "templates.h";
	std::string templates_encoders_h_ ="templates_encoders.h";
	std::string templates_encoders_cpp_ = "templates_encoders.cpp";

	bool is_msgseqnum_preamble_ = true;
};

#endif
