class BrazoRobotico {

	private:
		double x,y,z ; 
		bool objeto ; 

	public: 
		BrazoRobotico ();
		
		void coger();
		void soltar();
		void mover(double x, double y, double z) ;
			

		double consulx ();
		double consuly ();
		double consulz ();
		bool consulobjeto ();


};
