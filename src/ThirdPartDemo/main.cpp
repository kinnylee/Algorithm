#include <iostream>

#include "rapidjson/document.h"
#include <rapidjson/writer.h>

using namespace RAPIDJSON_NAMESPACE;
/*
int main()
{
    Document document;
    Document::AllocatorType &allocator = document.GetAllocator();
    Value root(kObjectType);
    Value content(kArrayType);
    for (int i = 0; i < 3; ++i)
    {
        Value child(kObjectType);
        child.AddMember("ID", 1, allocator);

        Value name(kStringType);
        const char* nameStr = "Hello World";
        name.SetString(StringRef(nameStr));
        child.AddMember("Name", name, allocator);
        content.PushBack(child, allocator);
    }
    root.AddMember("root", content, allocator);

    StringBuffer buff;
    Writer<StringBuffer> writer(buff);
    root.Accept(writer);
    std::cout << buff.GetString() << std::endl;
    system("pause");
    return 1;
}*/