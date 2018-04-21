#pragma once

namespace MOA
{
	namespace Core
	{
		class SoftwareManager
		{

		public:

			/**
			*Creates a new SoftwareManager instance
			*@return true if a new instance was created, false if an instance already exists
			*/
			static bool CreateInstance();

			/**
			*Initializes the SoftwareManager
			*@return true if initialized correct, false if initialization failed

			*/
			bool Init();

			/**
			*Runs the SoftwareManager 
			*/
			void Run();


			/**
			*Releases the active SoftwareManager instance
			*/
			static void Release();

			/**
			*Getter function which returns the active SoftwareManager instance
			*@return active SoftwareManager instance
			*/
			static SoftwareManager& GetInstance();


		private:
			static SoftwareManager* s_pSoftwareManager;
			SoftwareManager();
			~SoftwareManager();
		};
	}
}