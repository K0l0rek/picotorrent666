
// Generated from .\Query.g4 by ANTLR 4.8


#include "QueryLexer.h"


using namespace antlr4;

using namespace pt::PQL;

QueryLexer::QueryLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

QueryLexer::~QueryLexer() {
  delete _interpreter;
}

std::string QueryLexer::getGrammarFileName() const {
  return "Query.g4";
}

const std::vector<std::string>& QueryLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& QueryLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& QueryLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& QueryLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& QueryLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> QueryLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& QueryLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> QueryLexer::_decisionToDFA;
atn::PredictionContextCache QueryLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN QueryLexer::_atn;
std::vector<uint16_t> QueryLexer::_serializedATN;

std::vector<std::string> QueryLexer::_ruleNames = {
  u8"AND", u8"OR", u8"EQ", u8"CONTAINS", u8"GT", u8"GTE", u8"LT", u8"LTE", 
  u8"WS", u8"INT", u8"FLOAT", u8"STRING", u8"SIZE_SUFFIX", u8"ID"
};

std::vector<std::string> QueryLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> QueryLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> QueryLexer::_literalNames = {
  "", u8"'and'", u8"'or'", u8"'='", u8"'~'", u8"'>'", u8"'>='", u8"'<'", 
  u8"'<='"
};

std::vector<std::string> QueryLexer::_symbolicNames = {
  "", u8"AND", u8"OR", u8"EQ", u8"CONTAINS", u8"GT", u8"GTE", u8"LT", u8"LTE", 
  u8"WS", u8"INT", u8"FLOAT", u8"STRING", u8"SIZE_SUFFIX", u8"ID"
};

dfa::Vocabulary QueryLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> QueryLexer::_tokenNames;

QueryLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x10, 0x75, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 
    0xe, 0x4, 0xf, 0x9, 0xf, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x6, 0xa, 0x36, 0xa, 0xa, 0xd, 0xa, 
    0xe, 0xa, 0x37, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x5, 0xb, 0x3d, 0xa, 0xb, 
    0x3, 0xb, 0x6, 0xb, 0x40, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x41, 0x3, 0xc, 
    0x5, 0xc, 0x45, 0xa, 0xc, 0x3, 0xc, 0x6, 0xc, 0x48, 0xa, 0xc, 0xd, 0xc, 
    0xe, 0xc, 0x49, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0x4e, 0xa, 0xc, 0xd, 0xc, 
    0xe, 0xc, 0x4f, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x54, 0xa, 0xd, 0xc, 0xd, 
    0xe, 0xd, 0x57, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x6d, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 
    0x71, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x74, 0xb, 0xf, 0x3, 0x55, 0x2, 
    0x10, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 
    0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x19, 0xe, 0x1b, 0xf, 
    0x1d, 0x10, 0x3, 0x2, 0x6, 0x5, 0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 0x22, 
    0x3, 0x2, 0x32, 0x3b, 0x5, 0x2, 0x43, 0x5c, 0x61, 0x61, 0x63, 0x7c, 
    0x7, 0x2, 0x30, 0x30, 0x32, 0x3b, 0x43, 0x5c, 0x61, 0x61, 0x63, 0x7c, 
    0x2, 0x81, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x3, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x5, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x7, 0x26, 0x3, 0x2, 0x2, 0x2, 0x9, 0x28, 0x3, 0x2, 0x2, 0x2, 0xb, 0x2a, 
    0x3, 0x2, 0x2, 0x2, 0xd, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xf, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x11, 0x31, 0x3, 0x2, 0x2, 0x2, 0x13, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x15, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x17, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x19, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x1d, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x63, 0x2, 0x2, 0x20, 0x21, 
    0x7, 0x70, 0x2, 0x2, 0x21, 0x22, 0x7, 0x66, 0x2, 0x2, 0x22, 0x4, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 0x71, 0x2, 0x2, 0x24, 0x25, 0x7, 0x74, 
    0x2, 0x2, 0x25, 0x6, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x7, 0x3f, 0x2, 
    0x2, 0x27, 0x8, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x80, 0x2, 0x2, 
    0x29, 0xa, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x40, 0x2, 0x2, 0x2b, 
    0xc, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x40, 0x2, 0x2, 0x2d, 0x2e, 
    0x7, 0x3f, 0x2, 0x2, 0x2e, 0xe, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 
    0x3e, 0x2, 0x2, 0x30, 0x10, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x7, 0x3e, 
    0x2, 0x2, 0x32, 0x33, 0x7, 0x3f, 0x2, 0x2, 0x33, 0x12, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x36, 0x9, 0x2, 0x2, 0x2, 0x35, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 
    0x8, 0xa, 0x2, 0x2, 0x3a, 0x14, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3d, 0x7, 
    0x2f, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x9, 0x3, 0x2, 
    0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x16, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x7, 0x2f, 0x2, 0x2, 0x44, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x48, 0x9, 0x3, 0x2, 0x2, 0x47, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x4b, 0x4d, 0x7, 0x30, 0x2, 0x2, 0x4c, 0x4e, 0x9, 0x3, 0x2, 0x2, 0x4d, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x18, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x55, 0x7, 0x24, 0x2, 0x2, 0x52, 0x54, 0xb, 0x2, 
    0x2, 0x2, 0x53, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x59, 0x7, 0x24, 0x2, 0x2, 0x59, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 
    0x7, 0x6d, 0x2, 0x2, 0x5b, 0x6d, 0x7, 0x64, 0x2, 0x2, 0x5c, 0x5d, 0x7, 
    0x6f, 0x2, 0x2, 0x5d, 0x6d, 0x7, 0x64, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x69, 
    0x2, 0x2, 0x5f, 0x6d, 0x7, 0x64, 0x2, 0x2, 0x60, 0x61, 0x7, 0x6d, 0x2, 
    0x2, 0x61, 0x62, 0x7, 0x64, 0x2, 0x2, 0x62, 0x63, 0x7, 0x72, 0x2, 0x2, 
    0x63, 0x6d, 0x7, 0x75, 0x2, 0x2, 0x64, 0x65, 0x7, 0x6f, 0x2, 0x2, 0x65, 
    0x66, 0x7, 0x64, 0x2, 0x2, 0x66, 0x67, 0x7, 0x72, 0x2, 0x2, 0x67, 0x6d, 
    0x7, 0x75, 0x2, 0x2, 0x68, 0x69, 0x7, 0x69, 0x2, 0x2, 0x69, 0x6a, 0x7, 
    0x64, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x72, 0x2, 0x2, 0x6b, 0x6d, 0x7, 0x75, 
    0x2, 0x2, 0x6c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x5c, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x64, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6d, 
    0x1c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x72, 0x9, 0x4, 0x2, 0x2, 0x6f, 0x71, 
    0x9, 0x5, 0x2, 0x2, 0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0xc, 0x2, 0x37, 0x3c, 0x41, 0x44, 0x49, 0x4f, 0x55, 0x6c, 0x72, 
    0x3, 0x8, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

QueryLexer::Initializer QueryLexer::_init;