#!/usr/bin/env python2.7
import os
import sys
import logging

# Logger
logger = None

'''
List of Log Levels
ERROR=40,INFO=20,DEBUG=10
'''
LOG_LEVEL = 10

#
class Testplan:

	def __init__(self):
		logger.debug("Test Plan Initialization")

	def template_function(self):
		logger.debug("Test Plan function()")

#
def main():
	global logger

	# Set up the logger 
	logging.basicConfig(format='%(asctime)s %(funcName)-20s [%(lineno)s] : %(message)s',datefmt='%Y-%m-%d %H:%M:%S')
	logger = logging.getLogger('reviewBot')
	logger.setLevel(LOG_LEVEL)
			
	logger.debug("main")

	testplan = Testplan()

	testplan.template_function()

#	
if __name__=='__main__':
	main()
	sys.exit(0)
