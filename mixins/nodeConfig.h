#ifndef NODECONFIG
#define NODECONFIG

#include <unordered_map>
#include <vector>
#include <string>

typedef std::unordered_map<std::string, std::vector<std::string>> SinkCfg;

struct NodeCfg{
  SinkCfg sink_cfg;
  std::string node_address;
};

#endif