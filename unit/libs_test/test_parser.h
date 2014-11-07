#pragma  once

#include "rapidxml/rapidxml.h"
#include "rapidxml/rapidxml_print.h"
#include <string>
#include <algorithm>
using namespace std;


TEST(TestXml, xmlParserTest)
{
	using namespace rapidxml;

	xml_document<>doc;
	doc.parse<0>("123");
}

TEST(TestXml, xmlCreate)
{
	using namespace rapidxml;

	xml_document<> doc;
	xml_node<>* decl = doc.allocate_node(node_declaration);
	xml_attribute<>* decl_ver = doc.allocate_attribute("version", "1.1");
	decl->append_attribute(decl_ver);
	doc.append_node(decl);

	xml_node<>* node = doc.allocate_node(node_element, "hello", "world");
	doc.append_node(node);

	string text;
	rapidxml::print(std::back_inserter(text), doc, 0);
