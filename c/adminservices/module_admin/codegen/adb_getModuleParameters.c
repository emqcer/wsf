

        /**
         * adb_getModuleParameters.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_getModuleParameters.h"
        
               /*
                * implmentation of the getModuleParameters|http://service.mgt.module.carbon.wso2.org element
                */
           


        struct adb_getModuleParameters
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            axis2_char_t* property_moduleName;

                
                axis2_bool_t is_valid_moduleName;
            axis2_char_t* property_moduleVersion;

                
                axis2_bool_t is_valid_moduleVersion;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_getModuleParameters_t* AXIS2_CALL
        adb_getModuleParameters_create(
            const axutil_env_t *env)
        {
            adb_getModuleParameters_t *_getModuleParameters = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _getModuleParameters = (adb_getModuleParameters_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_getModuleParameters_t));

            if(NULL == _getModuleParameters)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_getModuleParameters, 0, sizeof(adb_getModuleParameters_t));

            _getModuleParameters->property_Type = axutil_strdup(env, "adb_getModuleParameters");
            _getModuleParameters->property_moduleName  = NULL;
                  _getModuleParameters->is_valid_moduleName  = AXIS2_FALSE;
            _getModuleParameters->property_moduleVersion  = NULL;
                  _getModuleParameters->is_valid_moduleVersion  = AXIS2_FALSE;
            
                  qname =  axutil_qname_create (env,
                        "getModuleParameters",
                        "http://service.mgt.module.carbon.wso2.org",
                        NULL);
                _getModuleParameters->qname = qname;
            

            return _getModuleParameters;
        }

        adb_getModuleParameters_t* AXIS2_CALL
        adb_getModuleParameters_create_with_values(
            const axutil_env_t *env,
                axis2_char_t* _moduleName,
                axis2_char_t* _moduleVersion)
        {
            adb_getModuleParameters_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_getModuleParameters_create(env);

            
              status = adb_getModuleParameters_set_moduleName(
                                     adb_obj,
                                     env,
                                     _moduleName);
              if(status == AXIS2_FAILURE) {
                  adb_getModuleParameters_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_getModuleParameters_set_moduleVersion(
                                     adb_obj,
                                     env,
                                     _moduleVersion);
              if(status == AXIS2_FAILURE) {
                  adb_getModuleParameters_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axis2_char_t* AXIS2_CALL
                adb_getModuleParameters_free_popping_value(
                        adb_getModuleParameters_t* _getModuleParameters,
                        const axutil_env_t *env)
                {
                    axis2_char_t* value;

                    
                    
                    value = _getModuleParameters->property_moduleName;

                    _getModuleParameters->property_moduleName = (axis2_char_t*)NULL;
                    adb_getModuleParameters_free(_getModuleParameters, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_getModuleParameters_free(
                adb_getModuleParameters_t* _getModuleParameters,
                const axutil_env_t *env)
        {
            
            
            return adb_getModuleParameters_free_obj(
                _getModuleParameters,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_getModuleParameters_free_obj(
                adb_getModuleParameters_t* _getModuleParameters,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _getModuleParameters, AXIS2_FAILURE);

            if (_getModuleParameters->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _getModuleParameters->property_Type);
            }

            adb_getModuleParameters_reset_moduleName(_getModuleParameters, env);
            adb_getModuleParameters_reset_moduleVersion(_getModuleParameters, env);
            
              if(_getModuleParameters->qname)
              {
                  axutil_qname_free (_getModuleParameters->qname, env);
                  _getModuleParameters->qname = NULL;
              }
            

            if(_getModuleParameters)
            {
                AXIS2_FREE(env->allocator, _getModuleParameters);
                _getModuleParameters = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_getModuleParameters_deserialize(
                adb_getModuleParameters_t* _getModuleParameters,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_getModuleParameters_deserialize_obj(
                _getModuleParameters,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_getModuleParameters_deserialize_obj(
                adb_getModuleParameters_t* _getModuleParameters,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _getModuleParameters, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for getModuleParameters : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              

                    current_element = (axiom_element_t *)axiom_node_get_data_element(parent, env);
                    qname = axiom_element_get_qname(current_element, env, parent);
                    if (axutil_qname_equals(qname, env, _getModuleParameters-> qname))
                    {
                        
                          first_node = axiom_node_get_first_child(parent, env);
                          
                    }
                    else
                    {
                        AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                              "Failed in building adb object for getModuleParameters : "
                              "Expected %s but returned %s",
                              axutil_qname_to_string(_getModuleParameters-> qname, env),
                              axutil_qname_to_string(qname, env));
                        
                        return AXIS2_FAILURE;
                    }
                    

                     
                     /*
                      * building moduleName element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "moduleName", "http://service.mgt.module.carbon.wso2.org", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_getModuleParameters_set_moduleName(_getModuleParameters, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for moduleName ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building moduleVersion element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "moduleVersion", "http://service.mgt.module.carbon.wso2.org", NULL);
                                 

                           if ( 
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      text_value = axiom_element_get_text(current_element, env, current_node);
                                      if(text_value != NULL)
                                      {
                                            status = adb_getModuleParameters_set_moduleVersion(_getModuleParameters, env,
                                                               text_value);
                                      }
                                      
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for moduleVersion ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_getModuleParameters_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_getModuleParameters_declare_parent_namespaces(
                    adb_getModuleParameters_t* _getModuleParameters,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_getModuleParameters_serialize(
                adb_getModuleParameters_t* _getModuleParameters,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_getModuleParameters_serialize_obj(
                    _getModuleParameters, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_getModuleParameters_serialize_obj(
                adb_getModuleParameters_t* _getModuleParameters,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
                    axis2_char_t *text_value_2;
                    axis2_char_t *text_value_2_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _getModuleParameters, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://service.mgt.module.carbon.wso2.org",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://service.mgt.module.carbon.wso2.org", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "getModuleParameters", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            
                    data_source = axiom_data_source_create(env, parent, &current_node);
                    stream = axiom_data_source_get_stream(data_source, env);
                  
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://service.mgt.module.carbon.wso2.org", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://service.mgt.module.carbon.wso2.org", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://service.mgt.module.carbon.wso2.org",
                                            p_prefix));
                       }
                      

                   if (!_getModuleParameters->is_valid_moduleName)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("moduleName"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("moduleName")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing moduleName element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%smoduleName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%smoduleName>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_1 = _getModuleParameters->property_moduleName;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://service.mgt.module.carbon.wso2.org", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://service.mgt.module.carbon.wso2.org", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://service.mgt.module.carbon.wso2.org",
                                            p_prefix));
                       }
                      

                   if (!_getModuleParameters->is_valid_moduleVersion)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("moduleVersion"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("moduleVersion")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing moduleVersion element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%smoduleVersion>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%smoduleVersion>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                    
                           text_value_2 = _getModuleParameters->property_moduleVersion;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_2_temp = axutil_xml_quote_string(env, text_value_2, AXIS2_TRUE);
                           if (text_value_2_temp)
                           {
                               axutil_stream_write(stream, env, text_value_2_temp, axutil_strlen(text_value_2_temp));
                               AXIS2_FREE(env->allocator, text_value_2_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_2, axutil_strlen(text_value_2));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                   if(namespaces)
                   {
                       axutil_hash_index_t *hi;
                       void *val;
                       for (hi = axutil_hash_first(namespaces, env); hi; hi = axutil_hash_next(env, hi)) 
                       {
                           axutil_hash_this(hi, NULL, NULL, &val);
                           AXIS2_FREE(env->allocator, val);
                       }
                       axutil_hash_free(namespaces, env);
                   }
                

            return parent;
        }


        

            /**
             * Getter for moduleName by  Property Number 1
             */
            axis2_char_t* AXIS2_CALL
            adb_getModuleParameters_get_property1(
                adb_getModuleParameters_t* _getModuleParameters,
                const axutil_env_t *env)
            {
                return adb_getModuleParameters_get_moduleName(_getModuleParameters,
                                             env);
            }

            /**
             * getter for moduleName.
             */
            axis2_char_t* AXIS2_CALL
            adb_getModuleParameters_get_moduleName(
                    adb_getModuleParameters_t* _getModuleParameters,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _getModuleParameters, NULL);
                  

                return _getModuleParameters->property_moduleName;
             }

            /**
             * setter for moduleName
             */
            axis2_status_t AXIS2_CALL
            adb_getModuleParameters_set_moduleName(
                    adb_getModuleParameters_t* _getModuleParameters,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_moduleName)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _getModuleParameters, AXIS2_FAILURE);
                
                if(_getModuleParameters->is_valid_moduleName &&
                        arg_moduleName == _getModuleParameters->property_moduleName)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_getModuleParameters_reset_moduleName(_getModuleParameters, env);

                
                if(NULL == arg_moduleName)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _getModuleParameters->property_moduleName = (axis2_char_t *)axutil_strdup(env, arg_moduleName);
                        if(NULL == _getModuleParameters->property_moduleName)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for moduleName");
                            return AXIS2_FAILURE;
                        }
                        _getModuleParameters->is_valid_moduleName = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for moduleName
            */
           axis2_status_t AXIS2_CALL
           adb_getModuleParameters_reset_moduleName(
                   adb_getModuleParameters_t* _getModuleParameters,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _getModuleParameters, AXIS2_FAILURE);
               

               
            
                
                if(_getModuleParameters->property_moduleName != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _getModuleParameters->property_moduleName);
                     _getModuleParameters->property_moduleName = NULL;
                }
            
                
                
                _getModuleParameters->is_valid_moduleName = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether moduleName is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_getModuleParameters_is_moduleName_nil(
                   adb_getModuleParameters_t* _getModuleParameters,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _getModuleParameters, AXIS2_TRUE);
               
               return !_getModuleParameters->is_valid_moduleName;
           }

           /**
            * Set moduleName to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_getModuleParameters_set_moduleName_nil(
                   adb_getModuleParameters_t* _getModuleParameters,
                   const axutil_env_t *env)
           {
               return adb_getModuleParameters_reset_moduleName(_getModuleParameters, env);
           }

           

            /**
             * Getter for moduleVersion by  Property Number 2
             */
            axis2_char_t* AXIS2_CALL
            adb_getModuleParameters_get_property2(
                adb_getModuleParameters_t* _getModuleParameters,
                const axutil_env_t *env)
            {
                return adb_getModuleParameters_get_moduleVersion(_getModuleParameters,
                                             env);
            }

            /**
             * getter for moduleVersion.
             */
            axis2_char_t* AXIS2_CALL
            adb_getModuleParameters_get_moduleVersion(
                    adb_getModuleParameters_t* _getModuleParameters,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _getModuleParameters, NULL);
                  

                return _getModuleParameters->property_moduleVersion;
             }

            /**
             * setter for moduleVersion
             */
            axis2_status_t AXIS2_CALL
            adb_getModuleParameters_set_moduleVersion(
                    adb_getModuleParameters_t* _getModuleParameters,
                    const axutil_env_t *env,
                    const axis2_char_t*  arg_moduleVersion)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _getModuleParameters, AXIS2_FAILURE);
                
                if(_getModuleParameters->is_valid_moduleVersion &&
                        arg_moduleVersion == _getModuleParameters->property_moduleVersion)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                adb_getModuleParameters_reset_moduleVersion(_getModuleParameters, env);

                
                if(NULL == arg_moduleVersion)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _getModuleParameters->property_moduleVersion = (axis2_char_t *)axutil_strdup(env, arg_moduleVersion);
                        if(NULL == _getModuleParameters->property_moduleVersion)
                        {
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Error allocating memeory for moduleVersion");
                            return AXIS2_FAILURE;
                        }
                        _getModuleParameters->is_valid_moduleVersion = AXIS2_TRUE;
                    
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for moduleVersion
            */
           axis2_status_t AXIS2_CALL
           adb_getModuleParameters_reset_moduleVersion(
                   adb_getModuleParameters_t* _getModuleParameters,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _getModuleParameters, AXIS2_FAILURE);
               

               
            
                
                if(_getModuleParameters->property_moduleVersion != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, _getModuleParameters->property_moduleVersion);
                     _getModuleParameters->property_moduleVersion = NULL;
                }
            
                
                
                _getModuleParameters->is_valid_moduleVersion = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether moduleVersion is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_getModuleParameters_is_moduleVersion_nil(
                   adb_getModuleParameters_t* _getModuleParameters,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _getModuleParameters, AXIS2_TRUE);
               
               return !_getModuleParameters->is_valid_moduleVersion;
           }

           /**
            * Set moduleVersion to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_getModuleParameters_set_moduleVersion_nil(
                   adb_getModuleParameters_t* _getModuleParameters,
                   const axutil_env_t *env)
           {
               return adb_getModuleParameters_reset_moduleVersion(_getModuleParameters, env);
           }

           
