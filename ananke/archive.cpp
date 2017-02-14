vector<uint8_t> Ananke::extractROM() {
  unzip archive;
  if(archive.open(information.archive)) {
    for(auto& file : archive.file) {
      if(file.name.endsWith(".sfc") || file.name.endsWith(".smc")
      || file.name.endsWith(".st")  || file.name.endsWith(".bs")
      || file.name.endsWith(".gb")  || file.name.endsWith(".gbc")
      ) {
        information.name = notdir(file.name);
        return archive.extract(file);
      }
    }
  }
  return vector<uint8_t>();
}

vector<uint8_t> Ananke::extractFile(const string& filename) {
  unzip archive;
  if(archive.open(information.archive)) {
    for(auto& file : archive.file) {
      if(notdir(file.name) == filename) {
        return archive.extract(file);
      }
    }
  }
  return vector<uint8_t>();
}
