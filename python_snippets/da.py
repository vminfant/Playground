import pandas 
import numpy

class da():

	def __init__(self,data):
		
		self.df = data
	
	def missing_data():
		
		results = {}
		no_of_records = self.df.shape[0]
		nan_df = self.df.isnull()
		nan_df_mc = nan_df.any()
		
		for column_name in nan_df_mc[nan_df_mc].index.values:
			count = nan_df[column_name].value_counts()
			results[column_name] = [count[False],count[True],format((count[False]/no_of_records)*100,'0.2f'),\
			                                  format((count[True]/no_of_records)*100,'0.2f')]
														        
		return pd.DataFrame(results,index=['VALID_COUNT','MISSING_COUNT','VALID_%','MISSING_%'])
